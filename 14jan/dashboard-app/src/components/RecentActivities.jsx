import axios from "axios";
import { useEffect, useState } from "react";

const RecentActivities = () => {
  const [activities, setActivities] = useState([]);

  useEffect(() => {
    axios.get("http://localhost:5000/activities").then((response) => {
      setActivities(response.data);
    });
  }, []);

  return (
    <div className="p-6 bg-white shadow-lg rounded-lg border border-gray-200">
      <h2 className="text-2xl font-semibold text-gray-700 mb-6">
        Recent Activities
      </h2>
      {activities.length > 0 ? (
        activities.map((activity) => (
          <div
            key={activity.id}
            className="mb-4 p-4 bg-gray-50 rounded-lg border border-gray-300"
          >
            <p className="text-gray-800 font-medium">{activity.description}</p>
            <p className="text-sm text-gray-500">
              {new Date(activity.timestamp).toLocaleString()}
            </p>
          </div>
        ))
      ) : (
        <p className="text-gray-500">No recent activities available</p>
      )}
    </div>
  );
};

export default RecentActivities;
